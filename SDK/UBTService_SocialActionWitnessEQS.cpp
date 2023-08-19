#include "UBTService_RunEQS.hpp"
#include "UBTService_SocialActionWitnessEQS.hpp"
UBTService_SocialActionWitnessEQS* UBTService_SocialActionWitnessEQS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_SocialActionWitnessEQS");
    return (UBTService_SocialActionWitnessEQS*)res;
}
