struct ZigbeeClusterTestClass {
    int someVariable;
    void someFunction() {
        // do something
    }
};

struct TestClusterBase : public ZigbeeClusterTestClass {
    int anotherVariable;
    void anotherFunction() {
        // do something else
    }
};

int main() {
    TestClusterBase testObject;
    testObject.someVariable = 10;
    testObject.someFunction();
    testObject.anotherVariable = 20;
    testObject.anotherFunction();
    return 0;
}
