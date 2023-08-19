#include "UActorComponent.hpp"
#include "UMasterTickThrottlerSingletonEditorUpdate.hpp"
UMasterTickThrottlerSingletonEditorUpdate* UMasterTickThrottlerSingletonEditorUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/MasterTickThrottler.MasterTickThrottlerSingletonEditorUpdate");
    return (UMasterTickThrottlerSingletonEditorUpdate*)res;
}
