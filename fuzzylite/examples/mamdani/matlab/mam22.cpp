#include <fl/Headers.h>

int main(int argc, char** argv){
using namespace fl;

Engine* engine = new Engine;
engine->setName("mam21");

InputVariable* inputVariable1 = new InputVariable;
inputVariable1->setEnabled(true);
inputVariable1->setName("angle");
inputVariable1->setRange(-5.000, 5.000);
inputVariable1->addTerm(new Bell("small", -5.000, 5.000, 8.000));
inputVariable1->addTerm(new Bell("big", 5.000, 5.000, 8.000));
engine->addInputVariable(inputVariable1);

InputVariable* inputVariable2 = new InputVariable;
inputVariable2->setEnabled(true);
inputVariable2->setName("velocity");
inputVariable2->setRange(-5.000, 5.000);
inputVariable2->addTerm(new Bell("small", -5.000, 5.000, 2.000));
inputVariable2->addTerm(new Bell("big", 5.000, 5.000, 2.000));
engine->addInputVariable(inputVariable2);

OutputVariable* outputVariable1 = new OutputVariable;
outputVariable1->setEnabled(true);
outputVariable1->setName("force");
outputVariable1->setRange(-5.000, 5.000);
outputVariable1->fuzzyOutput()->setAccumulation(new Maximum);
outputVariable1->setDefuzzifier(new Centroid(200));
outputVariable1->setDefaultValue(fl::nan);
outputVariable1->setLockPreviousOutputValue(false);
outputVariable1->setLockOutputValueInRange(false);
outputVariable1->addTerm(new Bell("negBig", -5.000, 1.670, 8.000));
outputVariable1->addTerm(new Bell("negSmall", -1.670, 1.670, 8.000));
outputVariable1->addTerm(new Bell("posSmall", 1.670, 1.670, 8.000));
outputVariable1->addTerm(new Bell("posBig", 5.000, 1.670, 8.000));
engine->addOutputVariable(outputVariable1);

OutputVariable* outputVariable2 = new OutputVariable;
outputVariable2->setEnabled(true);
outputVariable2->setName("force2");
outputVariable2->setRange(-5.000, 5.000);
outputVariable2->fuzzyOutput()->setAccumulation(new Maximum);
outputVariable2->setDefuzzifier(new Centroid(200));
outputVariable2->setDefaultValue(fl::nan);
outputVariable2->setLockPreviousOutputValue(false);
outputVariable2->setLockOutputValueInRange(false);
outputVariable2->addTerm(new Bell("negBig2", -3.000, 1.670, 8.000));
outputVariable2->addTerm(new Bell("negSmall2", -1.000, 1.670, 8.000));
outputVariable2->addTerm(new Bell("posSmall2", 1.000, 1.670, 8.000));
outputVariable2->addTerm(new Bell("posBig2", 3.000, 1.670, 8.000));
engine->addOutputVariable(outputVariable2);

RuleBlock* ruleBlock = new RuleBlock;
ruleBlock->setEnabled(true);
ruleBlock->setName("");
ruleBlock->setConjunction(new Minimum);
ruleBlock->setDisjunction(new Maximum);
ruleBlock->setActivation(new Minimum);
ruleBlock->addRule(fl::Rule::parse("if angle is small and velocity is small then force is negBig and force2 is posBig2", engine));
ruleBlock->addRule(fl::Rule::parse("if angle is small and velocity is big then force is negSmall and force2 is posSmall2", engine));
ruleBlock->addRule(fl::Rule::parse("if angle is big and velocity is small then force is posSmall and force2 is negSmall2", engine));
ruleBlock->addRule(fl::Rule::parse("if angle is big and velocity is big then force is posBig and force2 is negBig2", engine));
engine->addRuleBlock(ruleBlock);


}
