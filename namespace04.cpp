// You can use chains of scope resolution operators. 
// In the following example, NamespaceD::NamespaceD1 identifies 
// the nested namespace NamespaceD1, and NamespaceE::ClassE::ClassE1 
// identifies the nested class ClassE1.
namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{
    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
        };
    };
}

int main() {
    NamespaceD:: NamespaceD1::x = 6;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 7  ;
}
