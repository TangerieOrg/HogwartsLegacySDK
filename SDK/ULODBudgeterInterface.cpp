#include "UInterface.hpp"
#include "ULODBudgeterInterface.hpp"
ULODBudgeterInterface* ULODBudgeterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.LODBudgeterInterface");
    return (ULODBudgeterInterface*)res;
}
