//
// Created by kalesh on 2/16/19.
//

#include "Node.h"

Node::Node(std::string& label, std::string& value, std::vector<Node>& children)
: label(label), value(value), children(children) {}

Node::Node(std::string& label) : label(label) {}

Node::Node(std::string& label, std::string& value) : label(label), value(value) {}

/*
 * Adds the given node as a child, and returns the current node
 * to allow call chaining.
 */

Node* Node::addChild(Node& node) {
    children.push_back(node);
    return this;
}

/*
 * Returns the first child node with the given label.
 */
Node* Node::child(std::string label) {
    for (Node& child : children) {
        if (child.label == label) {
            return &child;
        }
    }
    return nullptr;
}

bool Node::operator==(const Node& rhs) const {
    return false;
}

bool Node::operator!=(const Node& rhs) const {
    return !(rhs==*this);
}