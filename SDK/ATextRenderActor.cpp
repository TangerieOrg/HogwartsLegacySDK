#include "AActor.hpp"
#include "ATextRenderActor.hpp"
#include "UTextRenderComponent.hpp"
ATextRenderActor* ATextRenderActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextRenderActor");
    return (ATextRenderActor*)res;
}
