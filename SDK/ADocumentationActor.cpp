#include "AActor.hpp"
#include "ADocumentationActor.hpp"
ADocumentationActor* ADocumentationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DocumentationActor");
    return (ADocumentationActor*)res;
}
