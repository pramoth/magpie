package com.stuffwithstuff.magpie.parser;

import com.stuffwithstuff.magpie.ast.Expr;

public interface PrefixParser {
  Expr parse(MagpieParser parser, Token token);
}
