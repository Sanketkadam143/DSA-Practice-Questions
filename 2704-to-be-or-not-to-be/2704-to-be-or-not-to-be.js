/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
      toBe: function(exptVal) { 
        if(val === exptVal) return true;
        throw new Error('Not Equal');
      },
      notToBe: function(exptVal) { 
        if(val!== exptVal) return true;
        throw new Error('Equal');
      }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */