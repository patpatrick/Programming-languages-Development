# Exercices
## 4. Test JUnit
### __Objectives__: Write a test according to the conventions of JUnit4 and ILP.
#### Goals
1. Understanding the tests and test suites in ILP1
2. Write a JUnit test 4 ILP1

##### 4.1 Work to be done

###### 4.1.1 Identify all test classes in sources ILP1
1. com/paracamplus/ilp1/compiler/test/CompilerTest.java
2. com/paracamplus/ilp1/interpreter/test/InterpreterTest.java
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

##### 4.1.4 Then check if you substitute your castsequence class mine, all ILP1 the tests still work. To do this, we need to look at the ASTfactory class.
*See files:*
1. *com.paracamplus.ilp1tme1.compiler.test.CompilerTest*
2. *com.paracamplus.ilp1tme1.interpreter.test.InterpreterTest*
3. *com.paracamplus.ilp1tme1.test.WholeTestSuite* 
