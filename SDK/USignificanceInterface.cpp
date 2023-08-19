#include "UInterface.hpp"
#include "USignificanceInterface.hpp"
USignificanceInterface* USignificanceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.SignificanceInterface");
    return (USignificanceInterface*)res;
}
