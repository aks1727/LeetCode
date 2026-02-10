class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int l = timeSeries.length;
        int totalDuration=0;
        for(int i = l-2 ; i >=0;i--){
            int diff = timeSeries[i+1]-timeSeries[i];
            totalDuration += (duration < diff) ?duration: diff;
        }
        totalDuration+=duration;
        return totalDuration;
    }
}