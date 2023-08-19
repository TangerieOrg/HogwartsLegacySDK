#include "UBTTask_Icarus_MoveTo.hpp"
#include "UBTTask_Mercuna_MoveTo.hpp"
UBTTask_Icarus_MoveTo* UBTTask_Icarus_MoveTo::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.BTTask_Icarus_MoveTo");
    return (UBTTask_Icarus_MoveTo*)res;
}
