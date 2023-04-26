#include "Defender.h"
Defender::Defender(int id, string PlayerName, string PlayerTeam, int PlayerTotalPoints, int PlayerPrice, string PlayerPosition, string PlayerStatus, int TotalCleanSheets)
	:Player(id, PlayerName, PlayerTeam, PlayerTotalPoints, PlayerPrice, PlayerPosition, PlayerStatus) {
	this->TotalCleanSheets = TotalCleanSheets;
}
void Defender::setCurrentCleanSheet(bool currentCleanSheet) {
	CurrentCleanSheet = currentCleanSheet;
}

void Defender::setTotalCleanSheets(int totalCleanSheets) {
	TotalCleanSheets = totalCleanSheets;
}

bool Defender::getCurrentCleanSheet() {
	return CurrentCleanSheet;
}

int Defender::getTotalCleanSheets() {
	return TotalCleanSheets;
}

void Defender::updateTotalCleanSheets() {
	if (CurrentCleanSheet)
		TotalCleanSheets++;
}