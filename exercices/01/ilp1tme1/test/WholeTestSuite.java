package com.paracamplus.ilp1tme1.test;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

@RunWith(value=Suite.class)
@SuiteClasses(value={
	com.paracamplus.ilp1.tools.test.FileToolTest.class,
    com.paracamplus.ilp1.tools.test.ProgramCallerTest.class,
	com.paracamplus.ilp1tme1.interpreter.test.InterpreterTest.class,
	com.paracamplus.ilp1tme1.compiler.test.CompilerTest.class
})
public class WholeTestSuite{
}
