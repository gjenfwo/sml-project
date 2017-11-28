import com.fuzzylite.*;
import com.fuzzylite.defuzzifier.*;
import com.fuzzylite.factory.*;
import com.fuzzylite.hedge.*;
import com.fuzzylite.imex.*;
import com.fuzzylite.norm.*;
import com.fuzzylite.norm.s.*;
import com.fuzzylite.norm.t.*;
import com.fuzzylite.rule.*;
import com.fuzzylite.term.*;
import com.fuzzylite.variable.*;

public class tippersg{
public static void main(String[] args){
Engine engine = new Engine();
engine.setName("sugeno tipper");

InputVariable inputVariable1 = new InputVariable();
inputVariable1.setEnabled(true);
inputVariable1.setName("service");
inputVariable1.setRange(0.000, 10.000);
inputVariable1.addTerm(new Gaussian("poor", 0.000, 1.500));
inputVariable1.addTerm(new Gaussian("average", 5.000, 1.500));
inputVariable1.addTerm(new Gaussian("good", 10.000, 1.500));
engine.addInputVariable(inputVariable1);

InputVariable inputVariable2 = new InputVariable();
inputVariable2.setEnabled(true);
inputVariable2.setName("food");
inputVariable2.setRange(0.000, 10.000);
inputVariable2.addTerm(new Trapezoid("rancid", -5.000, 0.000, 1.000, 3.000));
inputVariable2.addTerm(new Trapezoid("delicious", 7.000, 9.000, 10.000, 15.000));
engine.addInputVariable(inputVariable2);

OutputVariable outputVariable = new OutputVariable();
outputVariable.setEnabled(true);
outputVariable.setName("tip");
outputVariable.setRange(-30.000, 30.000);
outputVariable.fuzzyOutput().setAccumulation(null);
outputVariable.setDefuzzifier(new WeightedAverage("TakagiSugeno"));
outputVariable.setDefaultValue(Double.NaN);
outputVariable.setLockPreviousOutputValue(false);
outputVariable.setLockOutputValueInRange(false);
outputVariable.addTerm(Linear.create("cheap", engine, 0.000, 0.000, 5.000));
outputVariable.addTerm(Linear.create("average", engine, 0.000, 0.000, 15.000));
outputVariable.addTerm(Linear.create("generous", engine, 0.000, 0.000, 25.000));
engine.addOutputVariable(outputVariable);

RuleBlock ruleBlock = new RuleBlock();
ruleBlock.setEnabled(true);
ruleBlock.setName("");
ruleBlock.setConjunction(null);
ruleBlock.setDisjunction(new Maximum());
ruleBlock.setActivation(null);
ruleBlock.addRule(Rule.parse("if service is poor or food is rancid then tip is cheap", engine));
ruleBlock.addRule(Rule.parse("if service is average then tip is average", engine));
ruleBlock.addRule(Rule.parse("if service is good or food is delicious then tip is generous", engine));
engine.addRuleBlock(ruleBlock);


}
}
