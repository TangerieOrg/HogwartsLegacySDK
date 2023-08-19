#include "UCameraStackModificationSettings.hpp"
#include "UCameraStackOperationBase.hpp"
#include "UDataAsset.hpp"
UCameraStackModificationSettings* UCameraStackModificationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackModificationSettings");
    return (UCameraStackModificationSettings*)res;
}
