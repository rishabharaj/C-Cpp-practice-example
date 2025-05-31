 // You can use the scope resolution operator to identify a member of a namespace, 
// or to identify a namespace that nominates the member's namespace in a using directive. 
//   In the example below, you can use NamespaceC to qualify ClassB
// , even though ClassB was declared in namespace NamespaceB,
// because NamespaceB was nominated in NamespaceC by a using directive.

namespace NamespaceB {
    class ClassB {
    public:
        int x;
    };
}

namespace NamespaceC{
    using namespace NamespaceB;
}

int main() {
    NamespaceB::ClassB b_b;
    NamespaceC::ClassB c_b;

    b_b.x = 3;
    c_b.x = 4;
}
