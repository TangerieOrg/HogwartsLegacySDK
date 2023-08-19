#include "UInterface.hpp"
#include "UToolContextTransactionProvider.hpp"
UToolContextTransactionProvider* UToolContextTransactionProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider");
    return (UToolContextTransactionProvider*)res;
}
