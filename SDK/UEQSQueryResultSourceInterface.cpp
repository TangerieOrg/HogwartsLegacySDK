#include "UEQSQueryResultSourceInterface.hpp"
#include "UInterface.hpp"
UEQSQueryResultSourceInterface* UEQSQueryResultSourceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EQSQueryResultSourceInterface");
    return (UEQSQueryResultSourceInterface*)res;
}
