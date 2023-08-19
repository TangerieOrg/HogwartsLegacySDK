#include "UModel.hpp"
#include "UObject.hpp"
UModel* UModel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Model");
    return (UModel*)res;
}
