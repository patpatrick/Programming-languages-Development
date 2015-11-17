package com.paracamplus.ilp1tme1.interpreter.test;

import java.io.File;

import com.paracamplus.ilp1.ilp1tme1.ast.ASTfactory;
import com.paracamplus.ilp1.parser.IParser;
import com.paracamplus.ilp1.parser.IParserFactory;

public class InterpreterTest 
extends com.paracamplus.ilp1.interpreter.test.InterpreterTest{

	public InterpreterTest(File file) {
		super(file);
		IParserFactory factory = new ASTfactory();
		IParser parser = new com.paracamplus.ilp1.ast.Parser(factory);
		
		this.setParser(parser);
	}
	
	public static void main(String[] args){
		InterpreterTest it =new InterpreterTest(new File(args[0]));
		try {
			it.processFile();
		} catch (Throwable e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
}
