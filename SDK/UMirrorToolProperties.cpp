#include "EMirrorCtrlClickBehavior.hpp"
#include "EMirrorOperationMode.hpp"
#include "EMirrorSaveMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UMirrorToolProperties.hpp"
UMirrorToolProperties* UMirrorToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MirrorToolProperties");
    return (UMirrorToolProperties*)res;
}
