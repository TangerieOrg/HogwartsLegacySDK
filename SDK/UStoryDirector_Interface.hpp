#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UObject;
struct FSceneRigParameters;
#pragma pack(push, 1)
class UStoryDirector_Interface : public UInterface {
public:
    static UStoryDirector_Interface* StaticClass();
    void StoryEnded(UObject* inSceneRigStory);
    void SetupStorySceneRigProp(FSceneRigParameters& outParameters);
    void SetupStorySceneRigConnection(FSceneRigParameters& outParameters, int32_t InConnectionIndex, int32_t InChannel);
    void ParticipantFinishedExit(UObject* inParticipant, int32_t InConnectionIndex, FName inSocialSemantic, bool inTestForMovementMode);
    void ParticipantFinishedEnter(UObject* inParticipant, int32_t InConnectionIndex);
    void NotifyAllStoriesOfEvent(FName InEventName);
}; // Size: 0x28
#pragma pack(pop)
