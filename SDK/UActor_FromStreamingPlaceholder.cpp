#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_FromStreamingPlaceholder.hpp"
UActor_FromStreamingPlaceholder* UActor_FromStreamingPlaceholder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_FromStreamingPlaceholder");
    return (UActor_FromStreamingPlaceholder*)res;
}
