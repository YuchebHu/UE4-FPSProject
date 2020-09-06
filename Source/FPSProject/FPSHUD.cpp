// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSHUD.h"
#include "Engine/Canvas.h"

void AFPSHUD::DrawHUD() 
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		FVector2D Center(Canvas->ClipX * 0.5, Canvas->ClipY * 0.5);
		FVector2D CrosshairTexturePosistion(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5));

		FCanvasTileItem TileItem(CrosshairTexturePosistion, CrosshairTexture->Resource, FLinearColor::White);

		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}