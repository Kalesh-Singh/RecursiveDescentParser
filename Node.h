//
// Created by kalesh on 2/16/19.
//

#ifndef RECURSIVEDESCENTPARSER_NODE_H
#define RECURSIVEDESCENTPARSER_NODE_H

#include <vector>
#include <iostream>


/* Node Represents an AST node.
 * With some niceties for printing
 * and equality comparisons. */
class Node {
private:
    std::string label;
    std::string value;
    std::vector<Node> children;
public:
    Node(std::string& label, std::string& value, std::vector<Node>& children);

    Node(std::string& label);

    Node(std::string& label, std::string& value);

    /*
     * Adds the given node as a child, and returns the current node
     * to allow call chaining.
     */

    Node* addChild(Node& node);

    /*
     * Returns the first child node with the given label.
     */
    Node* child(std::string label);

    /*
     * Equality Operators
     */
    bool operator==(const Node& rhs) const;
    bool operator!=(const Node& rhs) const;
};

#endif //RECURSIVEDESCENTPARSER_NODE_H
