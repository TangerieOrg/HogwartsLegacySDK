#include "UBTService_BlackboardBase.hpp"
#include "UBTService_DefaultFocus.hpp"
UBTService_DefaultFocus* UBTService_DefaultFocus::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTService_DefaultFocus");
    return (UBTService_DefaultFocus*)res;
}
