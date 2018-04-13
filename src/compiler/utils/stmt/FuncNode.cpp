//
// Created by bsampat5 on 4/13/2018.
//

#include "FuncNode.h"

FuncNode::FuncNode(const std::string &name, const Node &identifier, const Node &parameters, const Node &block) : name(
        name), identifier(identifier), parameters(parameters), block(block) {}

std::ostream &operator<<(std::ostream &os, const FuncNode &node) {
    os << static_cast<const StatementNode &>(node) << " name: " << node.name << " identifier: " << node.identifier
       << " parameters: " << node.parameters << " block: " << node.block;
    return os;
}
