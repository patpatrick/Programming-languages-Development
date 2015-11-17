package com.paracamplus.ilp1tme1.compiler.test;

import java.io.File;

import com.paracamplus.ilp1.ilp1tme1.ast.ASTfactory;
import com.paracamplus.ilp1.parser.IParserFactory;

public class CompilerTest 
extends com.paracamplus.ilp1.compiler.test.CompilerTest{
	
	public CompilerTest(final File file){
		super(file);
		
		IParserFactory factory = new ASTfactory();
		parser = new com.paracamplus.ilp1.ast.Parser(factory);
		
		this.setParser(parser);
	}
	
	public static void main(String[] args){
		CompilerTest ct = new CompilerTest(new File(args[0]));
		try {
			ct.processFile();
		} catch (Throwable e) {
			e.printStackTrace();
		}
	}

}
