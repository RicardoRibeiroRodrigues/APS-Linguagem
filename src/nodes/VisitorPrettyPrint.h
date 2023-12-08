#ifndef VisitorPrettyPrint_h__
#define VisitorPrettyPrint_h__
#include <iostream>
#include <vector>

#include "Visitor.h"

namespace statpy {

class VisitorPrettyPrint : public Visitor
{
   int indent{0};
   std::ostream&  out;
public:
   VisitorPrettyPrint(std::ostream& outs) : out(outs) {}
   virtual ~VisitorPrettyPrint() {}
   void VisitExpression(Expression* expr);
   void VisitInteger( Integer* expr );
   void VisitDouble( Double* expr );
   void VisitString( String* expr );
   void VisitBoolean( Boolean* expr );
   void VisitIdentifier( Identifier* expr );
   void VisitUnaryOperator( UnaryOp* expr );
   void VisitBinaryOp( BinaryOp* expr );
   void VisitCompOperator( CompOperator* expr );
   void VisitBlock( Block* expr );
   void VisitStatement( Statement* stmt );
   void VisitReturnStatement( Return* retstmt );
   void VisitFunctionDeclaration( FunctionDeclaration* fndecl );
   void VisitExpressionStatement(ExpressionStatement* expr);
   void VisitAssigment(Assignment* expr);
   void VisitMethodCall(MethodCall* expr);
   void VisitVariablenDeclaration(VariableDeclaration* expr);
   void VisitConditional(Conditional* expr);
   void VisitWhileLoop(WhileLoop* expr);
   void VisitForLoop(ForLoop* expr);
   void VisitClassDeclaration(ClassDeclaration* expr);
};

}
#endif // VisitorPrettyPrint_h__


