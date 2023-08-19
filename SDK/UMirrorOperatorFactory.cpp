#include "UMirrorOperatorFactory.hpp"
#include "UMirrorTool.hpp"
#include "UObject.hpp"
UMirrorOperatorFactory* UMirrorOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MirrorOperatorFactory");
    return (UMirrorOperatorFactory*)res;
}
