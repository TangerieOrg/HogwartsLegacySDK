#include "UFXUpdate.hpp"
#include "UObject.hpp"
UFXUpdate* UFXUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.FXUpdate");
    return (UFXUpdate*)res;
}
