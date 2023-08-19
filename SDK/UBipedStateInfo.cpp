#include "UBipedStateInfo.hpp"
#include "UCharacterStateInfo.hpp"
UBipedStateInfo* UBipedStateInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BipedStateInfo");
    return (UBipedStateInfo*)res;
}
