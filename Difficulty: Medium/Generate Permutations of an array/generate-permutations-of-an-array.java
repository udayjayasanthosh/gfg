import java.util.*;

class Solution {
    ArrayList<ArrayList<Integer>> ans = new ArrayList<>();

    void solve(ArrayList<Integer> a, Set<Integer> s, int[] arr, int size) {
        if (s.size() == size) {
            ans.add(new ArrayList<>(a));
            return;
        } else {
            for (int i = 0; i < arr.length; i++) {
                if (s.contains(i)) {
                    continue;
                } else {
                    s.add(i);
                    a.add(arr[i]);
                    solve(a, s, arr, size);
                    s.remove(i);
                    a.remove(a.size() - 1);
                }
            }
        }
    }

    public ArrayList<ArrayList<Integer>> permuteDist(int[] arr) {
        int size = arr.length;

        for (int i = 0; i < arr.length; i++) {
            Set<Integer> s = new HashSet<>();
            s.add(i);
            ArrayList<Integer> a = new ArrayList<>();
            a.add(arr[i]);
            solve(a, s, arr, size);
        }

        return ans;
    }
}
