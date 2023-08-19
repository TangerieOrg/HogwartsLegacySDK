#include "UInterface.hpp"
#include "UNavRelevantInterface.hpp"
UNavRelevantInterface* UNavRelevantInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavRelevantInterface");
    return (UNavRelevantInterface*)res;
}
