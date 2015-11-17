# Exercices
## 3. Programming in ILP1
### __Objectives__:  Understand all the steps to write and execute a pro- gram ILP1.
#### Goals
1. Write a ILP1 program.
2. The developing syntactically by validation.
3. Le mettre au point sémantiquement par son exécution.

#### 3.3 Work to be done
Écrire un programme ILP1 qui calcule le discriminant d’une équation du second de- gré étant donnés les coefficients a, b, c. Votre programme doit d’abord lier les variables a, b et c aux valeurs choisies pour exécuter le calcul (avec des blocs unaires enchâs- sés). Ensuite, le programme calcule le discriminant et doit retourner l’une des chaînes suivantes :

* discriminating negative: no roots
* positive discriminant: two roots
* discriminant zero: one root

Your program must of course be well-formed and valid. Also try not compute
the discriminant at most once. The evaluation of this program is the subject of a following section.
Once you know write JUnit tests (see below), you can write the appropriate tests for your discriminating program: see section 5.

*Sees files:*

1. *u49-1.xml*
2. *u49-1.print*
3. *u49-1.result*

## 4. Test JUnit
### __Objectives__: Write a test according to the conventions of JUnit4 and ILP.
#### Goals
1. Understanding the tests and test suites in ILP1
2. Write a JUnit test 4 ILP1

##### 4.1 Work to be done

###### 4.1.1 Identify all test classes in sources ILP1
1. sparacamplus/ilp1/compiler/test/CompilerTest.java
2. oll the steps to write and execute a pro- gram ILP1.m/paracamplus/ilp1/interpreter/test/InterpreterTest.java
3. com/paracamplus/ilp1/test/WholeTestSuite.java
4. com/paracamplus/ilp1/tools/test/FileToolTest.java
5. com/paracamplus/ilp1/tools/test/ProgramCallerTest.java

###### 4.1.2 For each of these tests determine if this is the JUnit3 or JUnit4 determine what is tested, then launch the test from Eclipse.
1. It uses JUnit4 and tests the file compilation of a file insert at its creation.
2. It uses JUnit4 and tests the interpreter by setting the environnement.
3. It uses JUnit4 and runs all the tests. That means :
    * com.paracamplus.ilp1.tools.test.FileToolTest.class
    * com.paracamplus.ilp1.tools.test.ProgramCallerTest.class
    * com.paracamplus.ilp1.interpreter.test.InterpreterTest.class
    * com.paracamplus.ilp1.compiler.test.CompilerTest.class
4. It uses JUNit3 and tests the function *slurpFile* from *com.paracamplus.ilp1.tools.FileTool*
5. It uses JUnit3 and tests all cases call a program.

###### 4.1.3 Write ASTsequence the Test class (in JUnit 4) and the class meets castsequence minimally in this test. Index: XMLUnit is useful for comparing documents XML ments.
*See com.paracamplus.ilp1.ilp1tme1.test.ASTsequenceTest*.

###### 4.1.4 Then check if you substitute your castsequence class mine, all ILP1 the tests still work. To do this, we need to look at the ASTfactory class.
*See files:*

1. *com.paracamplus.ilp1tme1.compiler.test.CompilerTest*
2. *com.paracamplus.ilp1tme1.interpreter.test.InterpreterTest*
3. *com.paracamplus.ilp1tme1.test.WholeTestSuite* 

## 5. .Basic tests
### __Objectives__: Enrich the basic ILP tests
#### Goals
1. Understand the test suites in ILP1.
2. Enrichir la base des programmes ILP de test.

##### 5.1 Add a few ILP1 programs based tests for the discriminating lant calculated program you wrote above indicating the results and / or expected prints.
##### 5.2 Test the whole and enriched programs continues to pass WholeTestSuite.

*See the files :*

1. *Samples/u50-1.xml*
2. *Samples/u50-1.result*
3. *Samples/u50-1.print* 
