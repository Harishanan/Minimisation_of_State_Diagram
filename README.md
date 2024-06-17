# Minimisation_of_State_Diagram

## 1. Introduction

For the computer architecture part, a problem is given to solve using any programming languages. In the problem, a state diagram has been given. From that, a state table has been derived with having present state, next state and output. The state table shows that some of the present states are having similar next states and outputs. It means a present state is showing the same data again in another present state. It is duplicating. It fills unnecessary space in computer. Therefore, the last duplicating present state will be deleted. If that deleted present state comes in another present state’s next state, the deleted present state will be replaced by the existing present state. This check will happen until it shows the last minimisation of present state. This is process is called state minimisation. To solve this problem in real world, a state table has been given in the requirement documentation. To aid this solution, C++ used in this documentation and process.
<br>


## 2. Theory

### 2.1 State table & state minimisation table

![State machine question](initialstatemachine.png) <br>
<centre> Figure 1: Initial state machine and table question </centre> <br>

![State table from state diagram](statetable.png) <br>
<centre> Figure 2: State table from state diagram </centre> <br>

![State minimisation table-1](stateminimisation1.png) <br>
<centre> Figure 3: State minimisation table-1</centre> <br>

![State minimisation table-2](stateminimisation2.png) <br>
<centre> Figure 4: State minimisation table-2</centre> <br>

This state table, state minimisation table-1 and state minimisation table-2 have shown here to describe the process and to aid to describe the C++ programming language process. The figure 1 is the state table derived from the given state diagram in the task sheet. There present state g and e has same next state and output. Therefore, present state g has removed and replaced by e in other places. That results in figure 2 state minimisation table. Still the present state d and f has same next state and output. Therefore, present state f row has removed and replaced with d in other places. Finally, a minimisation state table got without any duplicate data. <br>
