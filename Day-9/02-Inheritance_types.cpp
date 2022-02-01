// Single Inheritance
class Parent{};
class child : public Parent{};

// Hierarchial Inheritance
class Parent{};
class child1: public Parent{};
class child2: public Parent{};

// Multiple Inheritance
class Parent1{};
class Parent2{};
class Child: public Parent1, public Parent2{};

// Multi Level Inheritance
class Parent{};
class Child: public Parent{};
class GrandChild: public Child{};

// Hybrid Inheritance
class Parent{};
class Child1: public Parent{};
class Child2: public Parent{};
class GrandChild: public Child1, public Child2{};