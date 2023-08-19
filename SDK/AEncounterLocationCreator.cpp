#include "AActor.hpp"
#include "AEncounterLocationCreator.hpp"
#include "AEncounterVolume.hpp"
#include "FLocationCreatorData.hpp"
#include "UFunction.hpp"
void AEncounterLocationCreator::AttachEncompassingStations(FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterLocationCreator.AttachEncompassingStations"));
    struct Params_AttachEncompassingStations {
        FString ObjectName; // 0x0
    }; // Size: 0x10
    Params_AttachEncompassingStations params{};
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
AEncounterLocationCreator* AEncounterLocationCreator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EncounterLocationCreator");
    return (AEncounterLocationCreator*)res;
}
void AEncounterLocationCreator::AttachObjectsToCreator(bool bInAttachObjects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EncounterLocationCreator.AttachObjectsToCreator"));
    struct Params_AttachObjectsToCreator {
        bool bInAttachObjects; // 0x0
    }; // Size: 0x1
    Params_AttachObjectsToCreator params{};
    params.bInAttachObjects = (bool)bInAttachObjects;
    ProcessEvent(func, &params);
}
