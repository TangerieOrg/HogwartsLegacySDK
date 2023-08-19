#include "EBTParallelMode\Type.hpp"
#include "UBTCompositeNode.hpp"
#include "UBTComposite_SimpleParallel.hpp"
UBTComposite_SimpleParallel* UBTComposite_SimpleParallel::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTComposite_SimpleParallel");
    return (UBTComposite_SimpleParallel*)res;
}
