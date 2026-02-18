
class Solution {
    public int prefixConnected(String[] words, int k) {
        HashMap<String,Integer> map = new HashMap<>();
        for(String word : words){
            if(word.length()<k)continue;
            String sub = word.substring(0,k);
            map.put(sub,map.getOrDefault(sub,0)+1);
        }
        int group=0;
        for(int cnt : map.values()) {
            if(cnt>=2)group++;
        }
        return group;
    }
}