// Use :: for scoped enumerations
// The scoped resolution operator is also used with 
// the values of a scoped enumeration Enumeration declarations, as in the following example:
enum class EnumA{
    First,
    Second,
    Third
};

int main() {
    EnumA enum_value = EnumA::First;
}
