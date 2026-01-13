class Solution {
    public String simplifyPath(String path) {
        Stack<Character> st = new Stack<>();

        char [] charPath = path.toCharArray();
        String res = "";
        st.push(charPath[0]);
        for(int i =1;i<charPath.length;i++){
           if(charPath[i]=='/'){
                if(!st.empty() && st.peek()=='/' ){
                    while(!st.empty() && st.peek()=='/'){
                        st.pop();
                    }
                }
                st.push('/');
            }
            else if(charPath[i]=='.'){
                // System.out.println(st+" "+i+" "+path);
                st.push('.');
                // System.out.println("insider st+ "+st);
                if(i==charPath.length-1 || (i<charPath.length-1 && charPath[i+1]=='/') )
                {
                    int cnt =0;
                    while(!st.empty() && st.peek()=='.'){
                        st.pop();
                        cnt++;
                    }
                    if(cnt==2){
                        if(!st.empty() && st.peek()=='/'){
                            st.pop();
                            while(!st.empty() && st.peek()!='/'){
                                st.pop();
                            }

                        }
                        else while(cnt-->0) st.push('.');
                    }
                    else if(cnt==1){
                        char t='=';
                        if(!st.empty())t = st.pop();
                        System.out.println(st+" "+t);
                        if(!st.empty() && st.peek()!='/' && t!='/'){
                            st.push(t);
                            st.push('.');
                        }
                    }
                    else{
                        while(cnt-->0) st.push('.');
                    }
                }
                // System.out.println("outside jati st "+ st);
                
                
            }
            else st.push(charPath[i]);
        }

        int j = charPath.length-1;
        String t = "";
        while(!st.empty()){
            t = t+ st.pop().toString();
        }
        int p =0;
        if(t.length()==1)p=p;
        else if(t.length()>0 && t.charAt(0)=='/') p++;
        else if(t.length()==0) return "/";
        for(int i = t.length()-1 ; i >=p;i--){
            res = res+ Character.toString(t.charAt(i));
        }
        return res;


    }
}