int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank >= 5) {
        distance += 50;
        mainTank -= 5;
        if (additionalTank > 0) {
            mainTank += 1;
            additionalTank--;
        }
    }
    return distance + mainTank * 10;
}
