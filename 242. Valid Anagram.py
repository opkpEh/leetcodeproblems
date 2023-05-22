class Solution(object):
      ssort= ""
      tsort= ""
      def isAnagram(s, t):
            ssort = ''.join(sorted(s))
            tsort= ''.join(sorted(t))
            
            if ssort==tsort:
                  return True
            
            else: return False
a = Solution

print(a.isAnagram(s="english",t="gneilshv"))
