#include "FSoftClassPath.hpp"
#include "UObject.hpp"
#include "USignificanceManager.hpp"
USignificanceManager* USignificanceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/SignificanceManager.SignificanceManager");
    return (USignificanceManager*)res;
}
