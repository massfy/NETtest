// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathActor.generated.h"

UCLASS()
class NETTEST_API ADeathActor : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh;

public:	
	ADeathActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimationAsset* NewAnimToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* MaterialInstanceDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* SourceMaterial;


public:
	FORCEINLINE class USkeletalMeshComponent* GetMesh() const { return Mesh; }
};
