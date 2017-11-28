#include <fl/Headers.h>

int main(int argc, char** argv){
using namespace fl;

Engine* engine = new Engine;
engine->setName("juggler");

InputVariable* inputVariable1 = new InputVariable;
inputVariable1->setEnabled(true);
inputVariable1->setName("xHit");
inputVariable1->setRange(-4.000, 4.000);
inputVariable1->addTerm(new Bell("in1mf1", -4.000, 2.000, 4.000));
inputVariable1->addTerm(new Bell("in1mf2", 0.000, 2.000, 4.000));
inputVariable1->addTerm(new Bell("in1mf3", 4.000, 2.000, 4.000));
engine->addInputVariable(inputVariable1);

InputVariable* inputVariable2 = new InputVariable;
inputVariable2->setEnabled(true);
inputVariable2->setName("projectAngle");
inputVariable2->setRange(0.000, 3.142);
inputVariable2->addTerm(new Bell("in2mf1", 0.000, 0.785, 4.000));
inputVariable2->addTerm(new Bell("in2mf2", 1.571, 0.785, 4.000));
inputVariable2->addTerm(new Bell("in2mf3", 3.142, 0.785, 4.000));
engine->addInputVariable(inputVariable2);

OutputVariable* outputVariable = new OutputVariable;
outputVariable->setEnabled(true);
outputVariable->setName("theta");
outputVariable->setRange(0.000, 0.000);
outputVariable->fuzzyOutput()->setAccumulation(fl::null);
outputVariable->setDefuzzifier(new WeightedAverage("TakagiSugeno"));
outputVariable->setDefaultValue(fl::nan);
outputVariable->setLockPreviousOutputValue(false);
outputVariable->setLockOutputValueInRange(false);
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 0.315));
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 0.315));
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 0.315));
outputVariable->addTerm(Linear::create("out1mf", engine, 0.114, -0.500, 0.785));
outputVariable->addTerm(Linear::create("out1mf", engine, 0.114, -0.500, 0.785));
outputVariable->addTerm(Linear::create("out1mf", engine, 0.114, -0.500, 0.785));
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 1.256));
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 1.256));
outputVariable->addTerm(Linear::create("out1mf", engine, -0.022, -0.500, 1.256));
engine->addOutputVariable(outputVariable);

RuleBlock* ruleBlock = new RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new AlgebraicProduct);
ruleBlock->setDisjunction(fl::null);
ruleBlock->setActivation(fl::null);
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf1 and projectAngle is in2mf1 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf1 and projectAngle is in2mf2 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf1 and projectAngle is in2mf3 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf2 and projectAngle is in2mf1 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf2 and projectAngle is in2mf2 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf2 and projectAngle is in2mf3 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf3 and projectAngle is in2mf1 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf3 and projectAngle is in2mf2 then theta is out1mf", engine));
ruleBlock->addRule(fl::Rule::parse("if xHit is in1mf3 and projectAngle is in2mf3 then theta is out1mf", engine));
engine->addRuleBlock(ruleBlock);


}
