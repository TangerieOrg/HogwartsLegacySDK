#include "UObject.hpp"
#include "UTickFunctionDependencyManager.hpp"
UTickFunctionDependencyManager* UTickFunctionDependencyManager::StaticClass() {
    static auto res = find_uobject("Class /Script/TickFunctionUtils.TickFunctionDependencyManager");
    return (UTickFunctionDependencyManager*)res;
}
