#class Solution(object):
#    def containsDuplicate(self, nums):
#        
#        nums.sort()
#        ind = 0
#        ind2= 1
#        to_return= False
#        
#        while ind < len(nums):
#            
#            if ind2==len(nums):
#                break
#            
#            if(nums[ind]== nums[ind2]):
#                to_return= True
#                    
#            ind= ind+1
#            ind2= ind2+1
#             
#        return to_return
#        
#
#a = Solution()
# 
#print(a.containsDuplicate([1,2,3,4,4]))

#class Solution:
#      def containsDuplicate(self, nums):
#            
#            hashset= set()
#            
#            for n in nums:
#                  if n in hashset:
#                        return True
#                  hashset.add(n)
#                  
#            return False