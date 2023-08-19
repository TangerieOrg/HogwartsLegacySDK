#include "UNPCTimersWrapper.hpp"
#include "UObject.hpp"
UNPCTimersWrapper* UNPCTimersWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPCTimersWrapper");
    return (UNPCTimersWrapper*)res;
}
