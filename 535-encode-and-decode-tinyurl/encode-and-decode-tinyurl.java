public class Codec {

    Map<String,String> map = new HashMap<>();

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        String hahah="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String hash = String.valueOf(Math.random()*10) ;
        for(int i = 0 ; i <7;i++){
            hash+= hahah.charAt((int)Math.random()*hahah.length());
        }
        map.put(hash,longUrl);
        return "http://tinyurl.com/"+hash;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        String [] stupidlogic = shortUrl.split("/");
        return map.get(stupidlogic[stupidlogic.length-1]);
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));